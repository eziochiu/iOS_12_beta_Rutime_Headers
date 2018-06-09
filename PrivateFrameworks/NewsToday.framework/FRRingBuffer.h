/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface FRRingBuffer : NSObject {
    unsigned long long  _capacity;
    double  _max;
    double  _min;
    unsigned long long  _position;
    NSMutableArray * _values;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) unsigned long long position;
@property (nonatomic, retain) NSMutableArray *values;

- (void).cxx_destruct;
- (unsigned long long)capacity;
- (id)description;
- (id)dictionary;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 dictionary:(id)arg2;
- (void)insertValue:(double)arg1;
- (double)max;
- (double)min;
- (unsigned long long)position;
- (void)setCapacity:(unsigned long long)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setPosition:(unsigned long long)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
