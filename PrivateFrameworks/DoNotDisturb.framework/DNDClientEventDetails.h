/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDClientEventDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _identifier;
    bool  _shouldAlwaysInterrupt;
    DNDClientEventSource * _source;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool shouldAlwaysInterrupt;
@property (nonatomic, readonly, copy) DNDClientEventSource *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 source:(id)arg2 shouldAlwaysInterrupt:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldAlwaysInterrupt;
- (id)source;

@end
