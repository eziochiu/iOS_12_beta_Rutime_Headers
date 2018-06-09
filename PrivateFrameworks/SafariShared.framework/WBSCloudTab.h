/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudTab : NSObject <NSCopying, WBSTabItemSearchSupport> {
    NSArray * _URLStringComponents;
    NSString * _URLStringForLastSearch;
    bool  _isShowingReader;
    NSString * _lastSearchTerm;
    bool  _matchedLastSearch;
    bool  _pinned;
    NSDictionary * _readerScrollPositionDictionary;
    NSString * _title;
    NSString * _titleForLastSearch;
    NSArray * _titleWords;
    NSURL * _url;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, copy) NSArray *URLStringComponents;
@property (nonatomic, copy) NSString *URLStringForLastSearch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentationForUserActivityUserInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isShowingReader;
@property (nonatomic, copy) NSString *lastSearchTerm;
@property (nonatomic) bool matchedLastSearch;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, copy) NSDictionary *readerScrollPositionDictionary;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleForLastSearch;
@property (nonatomic, copy) NSArray *titleWords;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(bool)arg4 readerScrollPosition:(id)arg5 isPinned:(bool)arg6;

- (void).cxx_destruct;
- (id)URLString;
- (id)URLStringComponents;
- (id)URLStringForLastSearch;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationForUserActivityUserInfo;
- (bool)hasSameUUIDAndURLAsTab:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionaryFromUserActivityUserInfo:(id)arg1;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(bool)arg4 readerScrollPosition:(id)arg5;
- (id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(bool)arg4 readerScrollPosition:(id)arg5 isPinned:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (bool)isShowingReader;
- (id)lastSearchTerm;
- (bool)matchedLastSearch;
- (id)readerScrollPositionDictionary;
- (void)setIsShowingReader:(bool)arg1;
- (void)setLastSearchTerm:(id)arg1;
- (void)setMatchedLastSearch:(bool)arg1;
- (void)setPinned:(bool)arg1;
- (void)setReaderScrollPositionDictionary:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleForLastSearch:(id)arg1;
- (void)setTitleWords:(id)arg1;
- (void)setURLStringComponents:(id)arg1;
- (void)setURLStringForLastSearch:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (id)titleForLastSearch;
- (id)titleWords;
- (id)url;
- (id)uuid;

@end
