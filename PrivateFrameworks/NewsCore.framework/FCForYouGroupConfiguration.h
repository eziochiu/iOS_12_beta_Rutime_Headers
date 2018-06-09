/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCForYouGroupConfiguration : NSObject <NSCopying> {
    bool  _allowsNativeAds;
    unsigned long long  _groupPosition;
    long long  _groupType;
    NSString * _identifier;
    unsigned long long  _precedingGroupsCount;
}

@property (nonatomic) bool allowsNativeAds;
@property (nonatomic) unsigned long long groupPosition;
@property (nonatomic) long long groupType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long precedingGroupsCount;

- (void).cxx_destruct;
- (bool)allowsNativeAds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)groupPosition;
- (long long)groupType;
- (id)identifier;
- (unsigned long long)precedingGroupsCount;
- (void)setAllowsNativeAds:(bool)arg1;
- (void)setGroupPosition:(unsigned long long)arg1;
- (void)setGroupType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrecedingGroupsCount:(unsigned long long)arg1;

@end
