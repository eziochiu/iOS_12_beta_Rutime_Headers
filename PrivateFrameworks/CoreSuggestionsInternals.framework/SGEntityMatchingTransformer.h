/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEntityMatchingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _addressMapping;
    NSString * _dateMapping;
    NSString * _emailMapping;
    NSString * _phoneMapping;
    NSString * _targetMapping;
}

@property (retain) NSString *addressMapping;
@property (retain) NSString *dateMapping;
@property (retain) NSString *emailMapping;
@property (retain) NSString *phoneMapping;
@property (retain) NSString *targetMapping;

+ (id)withTargetMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5;

- (void).cxx_destruct;
- (id)addressMapping;
- (id)dateMapping;
- (id)emailMapping;
- (id)initWithTargetMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5;
- (id)phoneMapping;
- (void)setAddressMapping:(id)arg1;
- (void)setDateMapping:(id)arg1;
- (void)setEmailMapping:(id)arg1;
- (void)setPhoneMapping:(id)arg1;
- (void)setTargetMapping:(id)arg1;
- (id)targetMapping;
- (id)transform:(id)arg1;

@end
