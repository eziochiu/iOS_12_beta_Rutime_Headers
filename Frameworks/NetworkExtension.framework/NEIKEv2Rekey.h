/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2Rekey : NSObject <NSObject> {
    PCSimpleTimer * _childLifetime;
    int  _childLifetimeMinutes;
    id /* block */  _childRekeyHandler;
    PCSimpleTimer * _ikeLifetime;
    int  _ikeLifetimeMinutes;
    id /* block */  _ikeRekeyHandler;
}

@property (retain) PCSimpleTimer *childLifetime;
@property int childLifetimeMinutes;
@property (copy) id /* block */ childRekeyHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) PCSimpleTimer *ikeLifetime;
@property int ikeLifetimeMinutes;
@property (copy) id /* block */ ikeRekeyHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)childLifetime;
- (int)childLifetimeMinutes;
- (id /* block */)childRekeyHandler;
- (void)clearTimers;
- (void)dealloc;
- (id)ikeLifetime;
- (int)ikeLifetimeMinutes;
- (id /* block */)ikeRekeyHandler;
- (void)invokeChildRekeyHandler;
- (void)invokeIKERekeyHandler;
- (void)setChildLifetime:(id)arg1;
- (void)setChildLifetimeMinutes:(int)arg1;
- (void)setChildRekeyHandler:(id /* block */)arg1;
- (void)setIkeLifetime:(id)arg1;
- (void)setIkeLifetimeMinutes:(int)arg1;
- (void)setIkeRekeyHandler:(id /* block */)arg1;
- (void)startChildTimer:(int)arg1 timeoutHandler:(id /* block */)arg2;
- (void)startIKETimer:(int)arg1 timeoutHandler:(id /* block */)arg2;

@end
