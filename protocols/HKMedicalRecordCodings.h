/* made by EzioChiu.
 */

@protocol HKMedicalRecordCodings <NSObject>

@required

+ (NSString *)defaultDisplayString;

- (NSString *)fallbackDisplayString;
- (NSArray *)indexKeywords;
- (NSArray *)medicalRecordCodings;
- (NSArray *)medicalRecordPreferredSystems;

@end
