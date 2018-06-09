/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

@interface CKContextRequest : NSObject <NSSecureCoding> {
    NSString * _contentAuthor;
    NSString * _contentDescription;
    NSString * _contentKeywords;
    bool  _debug;
    bool  _dontSkip;
    bool  _includeHigherLevelTopics;
    NSString * _languageTag;
    NSNumber * _overrideBlendAlpha;
    NSNumber * _overrideBlendBeta;
    NSNumber * _overrideBlendGamma;
    bool  _prepareOnly;
    NSString * _text;
    bool  _textIsRaw;
    bool  _timing;
    NSString * _title;
    unsigned int  _topk;
    unsigned long long  _type;
    NSString * _url;
}

@property (setter=setContentAuthor:, nonatomic, retain) NSString *contentAuthor;
@property (setter=setContentDescription:, nonatomic, retain) NSString *contentDescription;
@property (setter=setContentKeywords:, nonatomic, retain) NSString *contentKeywords;
@property (nonatomic) bool debug;
@property (nonatomic) bool dontSkip;
@property (nonatomic) bool includeHigherLevelTopics;
@property (nonatomic, retain) NSString *languageTag;
@property (nonatomic, retain) NSNumber *overrideBlendAlpha;
@property (nonatomic, retain) NSNumber *overrideBlendBeta;
@property (nonatomic, retain) NSNumber *overrideBlendGamma;
@property (nonatomic) bool prepareOnly;
@property (setter=setText:, nonatomic, retain) NSString *text;
@property (nonatomic) bool textIsRaw;
@property (nonatomic) bool timing;
@property (setter=setTitle:, nonatomic, retain) NSString *title;
@property (nonatomic) unsigned int topk;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *url;

+ (id)_newXpcConnection;
+ (id)_xpcConnection;
+ (void)findResponseByID:(id)arg1 withReply:(id /* block */)arg2;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(unsigned long long)arg3 withReply:(id /* block */)arg4;
+ (void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(id /* block */)arg3;
+ (void)findResultsForText:(id)arg1 withReply:(id /* block */)arg2;
+ (void)initialize;
+ (void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
+ (void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(bool)arg4 inputLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7;
+ (void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(unsigned long long)arg4 logType:(unsigned long long)arg5;
+ (bool)pingService;
+ (void)portraitBlacklistWithReply:(id /* block */)arg1;
+ (void)prepareRequestForText:(id)arg1 withReply:(id /* block */)arg2;
+ (id)requestWithText:(id)arg1;
+ (void)runOffMainThread:(id /* block */)arg1;
+ (void)setDefaultRequestType:(unsigned long long)arg1;
+ (bool)shutdownService;
+ (void)statusWithReply:(id /* block */)arg1;
+ (bool)supportsSecureCoding;
+ (id)trimTextToSize:(id)arg1;
+ (void)warmUpForRequestType:(unsigned long long)arg1 withReply:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_executeWithReply:(id /* block */)arg1;
- (void)capabilitiesWithReply:(id /* block */)arg1;
- (id)contentAuthor;
- (id)contentDescription;
- (id)contentKeywords;
- (bool)debug;
- (bool)dontSkip;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithReply:(id /* block */)arg1;
- (bool)includeHigherLevelTopics;
- (id)initForClient:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)languageTag;
- (id)overrideBlendAlpha;
- (id)overrideBlendBeta;
- (id)overrideBlendGamma;
- (bool)prepareOnly;
- (void)setContentAuthor:(id)arg1;
- (void)setContentDescription:(id)arg1;
- (void)setContentKeywords:(id)arg1;
- (void)setDebug:(bool)arg1;
- (void)setDontSkip:(bool)arg1;
- (void)setIncludeHigherLevelTopics:(bool)arg1;
- (void)setLanguageTag:(id)arg1;
- (void)setOverrideBlendAlpha:(id)arg1;
- (void)setOverrideBlendBeta:(id)arg1;
- (void)setOverrideBlendGamma:(id)arg1;
- (void)setPrepareOnly:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextIsRaw:(bool)arg1;
- (void)setTiming:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopk:(unsigned int)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (id)text;
- (bool)textIsRaw;
- (bool)timing;
- (id)title;
- (unsigned int)topk;
- (unsigned long long)type;
- (id)url;

@end
