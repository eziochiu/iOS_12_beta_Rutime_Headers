/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLConnectionCachedMessage : NSObject {
    NSString * _name;
    NSDictionary * _payload;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSDictionary *payload;

+ (id)cachedMessageWithName:(id)arg1 payload:(id)arg2;

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 payload:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)payload;

@end
