/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKAppSettings : NSObject <NSSecureCoding> {
    unsigned long long  _accessStatus;
    NSString * _channelID;
    NSString * _displayName;
    NSString * _externalID;
    bool  _obsolete;
}

@property (nonatomic) unsigned long long accessStatus;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic) bool obsolete;

+ (bool)isExternalID:(id)arg1 equalToExternalID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONDictionary;
- (id)_statusStrings;
- (unsigned long long)accessStatus;
- (id)channelID;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (unsigned long long)hash;
- (id)initWithChannelID:(id)arg1 accessStatus:(unsigned long long)arg2 displayName:(id)arg3 externalID:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAppSettings:(id)arg1;
- (bool)obsolete;
- (void)setAccessStatus:(unsigned long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setObsolete:(bool)arg1;

@end
