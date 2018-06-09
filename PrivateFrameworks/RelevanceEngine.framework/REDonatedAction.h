/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDonatedAction : NSObject <NSCopying, NSSecureCoding> {
    <REDonatedActionIdentifierProviding> * _actionTypeIdentifier;
    NSDate * _creationDate;
    REIdentifier * _donationIdentifier;
    NSDate * _localSaveDate;
    unsigned long long  _relevanceProvidersHash;
    unsigned long long  _type;
}

@property (nonatomic, readonly) <REDonatedActionIdentifierProviding> *actionTypeIdentifier;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) REIdentifier *donationIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *localSaveDate;
@property (nonatomic, readonly) unsigned long long relevanceProvidersHash;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportedActivityType:(id)arg1 forBundleID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_hashRelevanceProviders:(id)arg1;
- (id)_initInteractionWithEvent:(id)arg1 filtered:(bool)arg2;
- (id)_initRelevantShortcutWithEvent:(id)arg1 filtered:(bool)arg2;
- (id)_initUserActivityWithEvent:(id)arg1 filtered:(bool)arg2;
- (void)_loadDuetEvent:(id /* block */)arg1;
- (id)actionTypeIdentifier;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)donationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 filtered:(bool)arg2;
- (void)loadIntent:(id /* block */)arg1;
- (void)loadRelevantShortcut:(id /* block */)arg1;
- (void)loadUserActivity:(id /* block */)arg1;
- (id)localSaveDate;
- (unsigned long long)relevanceProvidersHash;
- (unsigned long long)type;

@end
