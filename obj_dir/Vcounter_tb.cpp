// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter_tb__pch.h"

//============================================================
// Constructors

Vcounter_tb::Vcounter_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounter_tb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcounter_tb::Vcounter_tb(const char* _vcname__)
    : Vcounter_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounter_tb::~Vcounter_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounter_tb___024root___eval_debug_assertions(Vcounter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcounter_tb___024root___eval_static(Vcounter_tb___024root* vlSelf);
void Vcounter_tb___024root___eval_initial(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD bool Vcounter_tb___024root___eval_stl(Vcounter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vcounter_tb___024root___eval_sample(Vcounter_tb___024root* vlSelf);
bool Vcounter_tb___024root___eval_ico(Vcounter_tb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vcounter_tb___024root___eval_act(Vcounter_tb___024root* vlSelf);
bool Vcounter_tb___024root___eval_inact(Vcounter_tb___024root* vlSelf);
bool Vcounter_tb___024root___eval_nba(Vcounter_tb___024root* vlSelf);
bool Vcounter_tb___024root___eval_obs(Vcounter_tb___024root* vlSelf);
bool Vcounter_tb___024root___eval_react(Vcounter_tb___024root* vlSelf);
void Vcounter_tb___024root___eval_postponed(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vcounter_tb___024root___eval_final(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vcounter_tb___024root___eval_dump_triggers__stl(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vcounter_tb___024root___eval_dump_triggers__ico(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vcounter_tb___024root___eval_dump_triggers__act(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vcounter_tb___024root___eval_dump_triggers__nba(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vcounter_tb___024root___eval_dump_triggers__obs(Vcounter_tb___024root* vlSelf);
VL_ATTR_COLD void Vcounter_tb___024root___eval_dump_triggers__react(Vcounter_tb___024root* vlSelf);

void Vcounter_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter_tb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vcounter_tb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vcounter_tb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vcounter_tb::evalStatic() {
    Vcounter_tb___024root___eval_static(&(vlSymsp->TOP));
}

void Vcounter_tb::evalInitial() {
    Vcounter_tb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vcounter_tb::evalStl(bool firstIteration) {
    return Vcounter_tb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vcounter_tb::evalSample() {
    Vcounter_tb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vcounter_tb::evalIco(bool firstIteration) {
    return Vcounter_tb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vcounter_tb::evalAct() {
    return Vcounter_tb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vcounter_tb::evalInact() {
    return Vcounter_tb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vcounter_tb::evalNba() {
    return Vcounter_tb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vcounter_tb::evalObs() {
    return Vcounter_tb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vcounter_tb::evalReact() {
    return Vcounter_tb___024root___eval_react(&(vlSymsp->TOP));
}

void Vcounter_tb::evalPostponed() {
    Vcounter_tb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vcounter_tb::evalFinal() {
    Vcounter_tb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_tb::dumpTriggersStl() {
    Vcounter_tb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_tb::dumpTriggersIco() {
    Vcounter_tb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_tb::dumpTriggersAct() {
    Vcounter_tb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_tb::dumpTriggersNba() {
    Vcounter_tb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_tb::dumpTriggersObs() {
    Vcounter_tb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vcounter_tb::dumpTriggersReact() {
    Vcounter_tb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

//============================================================
// Events and timing
bool Vcounter_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vcounter_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcounter_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcounter_tb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounter_tb::hierName() const { return vlSymsp->name(); }
const char* Vcounter_tb::modelName() const { return "Vcounter_tb"; }
unsigned Vcounter_tb::threads() const { return 1; }
void Vcounter_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcounter_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
