`timescale 1ns/1ps

module counter_tb;

    logic clk;
    logic reset;
    logic [3:0] count;

    counter #(
        .WIDTH(4)
    ) dut (
        .clk(clk),
        .reset(reset),
        .count(count)
    );

    // Generate a 10 ns clock
    always #5 clk = ~clk;

    initial begin
        // Initial conditions
        clk = 0;
        reset = 1;

        // Hold reset for two clock cycles
        #20;

        reset = 0;

        // Run for 20 clock cycles
        #200;

        $finish;
    end

    // Print counter value whenever it changes
    always @(posedge clk) begin
        $display(
            "Time=%0t | Reset=%b | Count=%0d",
            $time,
            reset,
            count
        );
    end

endmodule