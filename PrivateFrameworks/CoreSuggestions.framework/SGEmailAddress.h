/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGEmailAddress : SGLabeledObject {
    NSString * _emailAddress;
}

@property (nonatomic, readonly) NSString *emailAddress;

+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4;
+ (id)emailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 withRecordId:(id)arg4 origin:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1 label:(id)arg2 extractionType:(unsigned long long)arg3 recordId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEmailAddress:(id)arg1;

@end