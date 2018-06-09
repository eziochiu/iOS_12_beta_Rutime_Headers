/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSPerSitePreferenceValueInformation : NSObject {
    NSDate * _creationDate;
    NSString * _domain;
    NSNumber * _value;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) NSNumber *value;

- (void).cxx_destruct;
- (id)creationDate;
- (id)domain;
- (id)initWithDomain:(id)arg1 value:(id)arg2 creationDate:(id)arg3;
- (id)value;

@end
