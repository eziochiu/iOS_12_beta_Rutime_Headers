/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCommandProcessor : NSObject <CFCommandProcessing> {
    CFCommandQueuer * _commandQueuer;
    CFServiceHelper * _serviceHelper;
}

@property (nonatomic, retain) CFCommandQueuer *commandQueuer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CFServiceHelper *serviceHelper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)commandQueuer;
- (void)handleCommand:(id)arg1 reply:(id /* block */)arg2;
- (void)handleOneWayCommand:(id)arg1;
- (id)initWithServiceHelper:(id)arg1 commandQueuer:(id)arg2;
- (void)isDeviceLockedWithPasscodeWithCompletion:(id /* block */)arg1;
- (id)serviceHelper;
- (void)setCommandQueuer:(id)arg1;
- (void)setServiceHelper:(id)arg1;

@end
