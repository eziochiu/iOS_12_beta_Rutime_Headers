/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateBreathing : CLKComplicationTemplate {
    long long  _family;
    long long  _sessionCount;
}

@property (nonatomic) long long sessionCount;

+ (id)breathingTemplateWithFamily:(long long)arg1;

- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (long long)sessionCount;
- (void)setSessionCount:(long long)arg1;

@end
