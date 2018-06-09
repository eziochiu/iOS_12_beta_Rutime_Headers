/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleContentManifest : NSObject {
    NSString * _articleID;
    unsigned long long  _contentType;
    FCFlintManifest * _flintManifest;
    FCVideoManifest * _videoManifest;
    FCWebManifest * _webManifest;
}

@property (nonatomic, copy) NSString *articleID;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic, retain) FCFlintManifest *flintManifest;
@property (nonatomic, retain) FCVideoManifest *videoManifest;
@property (nonatomic, retain) FCWebManifest *webManifest;

- (void).cxx_destruct;
- (id)articleID;
- (unsigned long long)contentType;
- (id)flintManifest;
- (unsigned long long)hash;
- (id)initWithArticleID:(id)arg1 contentType:(unsigned long long)arg2;
- (id)initWithArticleID:(id)arg1 flintManifest:(id)arg2;
- (id)initWithArticleID:(id)arg1 videoManifest:(id)arg2;
- (id)initWithArticleID:(id)arg1 webManifest:(id)arg2;
- (id)initWithContext:(id)arg1 articleRecord:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setFlintManifest:(id)arg1;
- (void)setVideoManifest:(id)arg1;
- (void)setWebManifest:(id)arg1;
- (id)videoManifest;
- (id)webManifest;

@end
