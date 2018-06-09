/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding> {
    NSData * _labelData;
    NSData * _phoneNumberData;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *labelData;
@property (nonatomic, retain) NSData *phoneNumberData;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)labelData;
- (long long)phoneNumberAtIndex:(unsigned long long)arg1;
- (id)phoneNumberData;
- (void)setLabelData:(id)arg1;
- (void)setPhoneNumberData:(id)arg1;
- (const char *)utf8LabelAtIndex:(unsigned long long)arg1 length:(out unsigned short*)arg2;

@end
