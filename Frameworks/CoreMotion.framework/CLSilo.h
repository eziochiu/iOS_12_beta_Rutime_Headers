/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLSilo : NSObject <NSCopying> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (id)globalConfiguration;
+ (id)main;
+ (void)setGlobalConfiguration:(id)arg1;

- (void).cxx_destruct;
- (void)afterInterval:(double)arg1 async:(id /* block */)arg2;
- (void)assertInside;
- (void)assertOutside;
- (void)async:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)newTimer;
- (void)sync:(id /* block */)arg1;

@end
