extern "C" {
 void _ZN7android11IDumpTunnel11asInterfaceERKNS_2spINS_7IBinderEEE(){}
 void _ZN7android9CallStackC1EPKcii(char const*, int, int);
 void _ZN7android9CallStack6updateEiii(int, int, int);

 void _ZN7android9CallStackC1EPKci(char const* logtag, int ignoreDepth){
  _ZN7android9CallStackC1EPKcii(logtag, ignoreDepth, 31);
  }

 void _ZN7android9CallStack6updateEii(int ignoreDepth, int tid){
  _ZN7android9CallStack6updateEiii(ignoreDepth, 31, tid);
 }
}