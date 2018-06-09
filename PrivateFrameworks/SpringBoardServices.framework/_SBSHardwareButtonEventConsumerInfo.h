/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable> {
    long long  _buttonKind;
    <SBSHardwareButtonEventConsuming> * _consumer;
    unsigned long long  _eventMask;
    long long  _eventPriority;
    SBSHardwareButtonService * _service;
    bool  _valid;
}

@property (nonatomic) long long buttonKind;
@property (nonatomic, retain) <SBSHardwareButtonEventConsuming> *consumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long eventPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic) SBSHardwareButtonService *service;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic) bool valid;

+ (id)infoWithConsumer:(id)arg1;

- (void).cxx_destruct;
- (long long)buttonKind;
- (id)consumer;
- (void)dealloc;
- (id)description;
- (unsigned long long)eventMask;
- (long long)eventPriority;
- (void)invalidate;
- (bool)isValid;
- (id)service;
- (void)setButtonKind:(long long)arg1;
- (void)setConsumer:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1;
- (void)setEventPriority:(long long)arg1;
- (void)setService:(id)arg1;
- (void)setValid:(bool)arg1;

@end
