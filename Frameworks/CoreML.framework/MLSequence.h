/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLSequence : NSObject {
    long long  _type;
    NSArray * _values;
}

@property (nonatomic, readonly) NSArray *featureValues;
@property (nonatomic, readonly) NSArray *int64Values;
@property (nonatomic, readonly) NSArray *stringValues;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *values;

+ (id)emptySequenceWithType:(long long)arg1;
+ (id)sequenceFromArray:(id)arg1 error:(id*)arg2;
+ (id)sequenceWithInt64Array:(id)arg1;
+ (id)sequenceWithStringArray:(id)arg1;

- (void).cxx_destruct;
- (id)featureValues;
- (id)initWithArray:(id)arg1 type:(long long)arg2;
- (id)int64Values;
- (id)stringValues;
- (long long)type;
- (id)values;

@end
