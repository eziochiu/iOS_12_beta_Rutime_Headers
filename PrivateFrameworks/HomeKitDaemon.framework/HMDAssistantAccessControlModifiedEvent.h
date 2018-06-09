/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssistantAccessControlModifiedEvent : HMDLogEvent <HMDAWDLogEvent> {
    bool  _isEnabled;
    unsigned long long  _numCapableAccessories;
    unsigned long long  _numEnabledAccessories;
    unsigned long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEnabled;
@property (nonatomic) unsigned long long numCapableAccessories;
@property (nonatomic) unsigned long long numEnabledAccessories;
@property (nonatomic) unsigned long long options;
@property (readonly) Class superclass;

+ (id)eventWithIsEnabled:(bool)arg1 options:(unsigned long long)arg2 numEnabledAccessories:(unsigned long long)arg3 numCapableAccessories:(unsigned long long)arg4;
+ (void)initialize;
+ (id)uuid;

- (unsigned int)AWDMessageType;
- (bool)isEnabled;
- (id)metricForAWD;
- (unsigned long long)numCapableAccessories;
- (unsigned long long)numEnabledAccessories;
- (unsigned long long)options;
- (void)setIsEnabled:(bool)arg1;
- (void)setNumCapableAccessories:(unsigned long long)arg1;
- (void)setNumEnabledAccessories:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
