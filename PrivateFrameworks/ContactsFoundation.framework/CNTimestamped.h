/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNTimestamped : NSObject {
    double  _timestamp;
    id  _value;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) id value;

+ (id)timestampedWithValue:(id)arg1 timestamp:(double)arg2;
+ (id /* block */)wrapTransformWithScheduler:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 timestamp:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)timestamp;
- (id)value;

@end
