/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpBookController : HLPRemoteDataController {
    NSString * _bookId;
    long long  _contentFormatVersion;
    NSString * _contentVersion;
    NSString * _copyrightText;
    NSString * _copyrightTopicIdentifier;
    bool  _fullBookView;
    bool  _hasSectionIcon;
    NSURL * _helpBookURL;
    NSMutableDictionary * _helpItemMap;
    NSString * _iconBasePath;
    HLPURLImageCacheController * _imageCacheController;
    HLPHelpLocale * _locale;
    NSString * _remoteSearchPath;
    HLPHelpSectionItem * _rootSectionItem;
    long long  _serverType;
    NSString * _topicPathFormat;
    NSString * _welcomeTopicIdentifier;
}

@property (nonatomic, retain) NSString *bookId;
@property (nonatomic) long long contentFormatVersion;
@property (nonatomic, retain) NSString *contentVersion;
@property (nonatomic, retain) NSString *copyrightText;
@property (nonatomic, retain) NSString *copyrightTopicIdentifier;
@property (nonatomic) bool fullBookView;
@property (nonatomic) bool hasSectionIcon;
@property (nonatomic, retain) NSURL *helpBookURL;
@property (nonatomic, retain) NSMutableDictionary *helpItemMap;
@property (nonatomic, retain) NSString *iconBasePath;
@property (nonatomic, retain) HLPURLImageCacheController *imageCacheController;
@property (nonatomic, retain) HLPHelpLocale *locale;
@property (nonatomic, retain) NSString *remoteSearchPath;
@property (nonatomic, retain) HLPHelpSectionItem *rootSectionItem;
@property (getter=isSemanticHTML, nonatomic, readonly) bool semanticHTML;
@property (nonatomic) long long serverType;
@property (nonatomic, retain) NSString *topicPathFormat;
@property (nonatomic, retain) NSString *welcomeTopicIdentifier;

- (void).cxx_destruct;
- (void)addAsideTopic:(id)arg1;
- (id)bookId;
- (long long)contentFormatVersion;
- (id)contentVersion;
- (id)copyrightText;
- (id)copyrightTopicIdentifier;
- (id)copyrightTopicItem;
- (void)dealloc;
- (id)dynamicServerSectionsForIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 tocMap:(id)arg4;
- (bool)fullBookView;
- (bool)hasSectionIcon;
- (id)helpBookURL;
- (id)helpItemForID:(id)arg1;
- (id)helpItemMap;
- (id)helpTopicItemForID:(id)arg1;
- (id)helpTopicItemForName:(id)arg1;
- (id)iconBasePath;
- (id)imageCacheController;
- (bool)isSemanticHTML;
- (id)locale;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (id)remoteSearchPath;
- (id)rootSectionItem;
- (id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5;
- (long long)serverType;
- (void)setBookId:(id)arg1;
- (void)setContentFormatVersion:(long long)arg1;
- (void)setContentVersion:(id)arg1;
- (void)setCopyrightText:(id)arg1;
- (void)setCopyrightTopicIdentifier:(id)arg1;
- (void)setFullBookView:(bool)arg1;
- (void)setHasSectionIcon:(bool)arg1;
- (void)setHelpBookURL:(id)arg1;
- (void)setHelpItemMap:(id)arg1;
- (void)setIconBasePath:(id)arg1;
- (void)setImageCacheController:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setRemoteSearchPath:(id)arg1;
- (void)setRootSectionItem:(id)arg1;
- (void)setServerType:(long long)arg1;
- (void)setTopicPathFormat:(id)arg1;
- (void)setWelcomeTopicIdentifier:(id)arg1;
- (id)topicPathFormat;
- (id)welcomeTopicIdentifier;
- (id)welcomeTopicItem;

@end
