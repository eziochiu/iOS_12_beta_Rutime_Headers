/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSValueTransformer : NSObject

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)allowsReverseTransformation;
+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;
+ (Class)transformedValueClass;
+ (id)valueTransformerForName:(id)arg1;
+ (id)valueTransformerNames;

- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;

// Image: /Developer/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (void)xr_registerSecureUnarchiveTransformer;

@end
