/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLURLAttachment : SLAttachment {
    long long  _urlType;
}

- (id)initWithURL:(id)arg1 ofType:(long long)arg2 preview:(id)arg3;
- (id)initWithURL:(id)arg1 previewImage:(id)arg2;
- (long long)urlType;

@end
