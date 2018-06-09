/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Engram.framework/Engram
 */

@interface ENKeyedArchiverFromDataTransformer : NSValueTransformer

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
