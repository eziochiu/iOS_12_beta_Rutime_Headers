/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMixedMessageFragment : NSObject {
    NSURL * _baseURL;
    NSData * _markupData;
    NSString * _markupString;
    NSString * _mimeType;
    NSString * _textEncodingName;
}

- (id)baseURL;
- (void)dealloc;
- (id)description;
- (id)encodingName;
- (id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3;
- (id)initWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)markupData;
- (id)markupString;
- (id)mimeType;

@end
