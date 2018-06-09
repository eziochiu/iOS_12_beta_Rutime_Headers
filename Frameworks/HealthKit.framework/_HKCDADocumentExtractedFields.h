/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCDADocumentExtractedFields : NSObject {
    NSString * _extractedAuthorName;
    NSString * _extractedCustodianName;
    NSDate * _extractedDate;
    NSString * _extractedPatient;
    NSString * _extractedTitle;
}

@property (nonatomic, readonly) NSString *extractedAuthorName;
@property (nonatomic, readonly) NSString *extractedCustodianName;
@property (nonatomic, readonly) NSDate *extractedDate;
@property (nonatomic, readonly) NSString *extractedPatient;
@property (nonatomic, readonly) NSString *extractedTitle;

- (void).cxx_destruct;
- (id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(bool)arg3;
- (id)_parseCDADate:(id)arg1;
- (id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(bool)arg4;
- (void)extractHeaderFieldsFromDocumentData:(id)arg1;
- (id)extractedAuthorName;
- (id)extractedCustodianName;
- (id)extractedDate;
- (id)extractedPatient;
- (id)extractedTitle;
- (id)initWithDocumentData:(id)arg1;

@end
