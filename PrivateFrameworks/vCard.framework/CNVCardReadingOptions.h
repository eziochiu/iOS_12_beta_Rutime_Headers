/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardReadingOptions : NSObject {
    unsigned long long  _contactLimit;
    unsigned long long  _maximumValueLength;
    NSArray * _propertiesToFetch;
}

@property (nonatomic) unsigned long long contactLimit;
@property (nonatomic) unsigned long long maximumValueLength;
@property (nonatomic, copy) NSArray *propertiesToFetch;

- (void).cxx_destruct;
- (unsigned long long)contactLimit;
- (id)description;
- (id)init;
- (unsigned long long)maximumValueLength;
- (id)propertiesToFetch;
- (void)setContactLimit:(unsigned long long)arg1;
- (void)setMaximumValueLength:(unsigned long long)arg1;
- (void)setPropertiesToFetch:(id)arg1;

@end
