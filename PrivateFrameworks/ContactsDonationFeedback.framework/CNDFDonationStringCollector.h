/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonationFeedback.framework/ContactsDonationFeedback
 */

@interface CNDFDonationStringCollector : NSObject <CNDonationValueVisitor> {
    NSMutableArray * _visitedStrings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *strings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *visitedStrings;

- (void).cxx_destruct;
- (void)collectStringsFromDonation:(id)arg1;
- (id)description;
- (id)init;
- (id)strings;
- (void)visitDonationValue:(id)arg1 emailAddress:(id)arg2 label:(id)arg3;
- (void)visitDonationValue:(id)arg1 imageData:(id)arg2;
- (void)visitDonationValue:(id)arg1 nameComponents:(id)arg2;
- (void)visitDonationValue:(id)arg1 phoneNumber:(id)arg2 label:(id)arg3;
- (void)visitDonationValue:(id)arg1 postalAddress:(id)arg2 style:(long long)arg3 label:(id)arg4;
- (id)visitedStrings;

@end
