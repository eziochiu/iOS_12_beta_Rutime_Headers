/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCSVParser : NSObject

+ (id)commaCharacterSet;
+ (id)fieldWithScanner:(id)arg1 error:(out id*)arg2;
+ (id)newlineCharacterSet;
+ (bool)newlineWithScanner:(id)arg1;
+ (id)parseCSV:(id)arg1 error:(out id*)arg2;
+ (id)quoteCharacterSet;
+ (id)recordWithScanner:(id)arg1 error:(out id*)arg2;
+ (id)terminatingCharacterSet;

@end
