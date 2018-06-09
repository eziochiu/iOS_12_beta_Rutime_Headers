/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKDataProtectionStateMonitor : NSObject {
    id /* block */  _changeHandler;
    NSUUID * _handlerUUID;
    _DKDataProtectionMaster * _master;
}

@property (copy) id /* block */ changeHandler;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (void)dealloc;
- (id)init;
- (bool)isDataAvailableFor:(id)arg1;
- (void)setChangeHandler:(id /* block */)arg1;

@end
