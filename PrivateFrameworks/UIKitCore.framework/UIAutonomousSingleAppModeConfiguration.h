/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying> {
    unsigned long long  _style;
}

@property (nonatomic) unsigned long long style;

+ (id)defaultConfiguration;
+ (id)defaultConfigurationForStyle:(unsigned long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
