/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageBody : NSObject {
    MFMessage * _message;
}

- (id)attachmentURLs;
- (id)attachments;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3 isComplete:(bool*)arg4;
- (void)dealloc;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2;
- (bool)isHTML;
- (bool)isRich;
- (id)message;
- (unsigned int)numberOfAttachmentsSigned:(bool*)arg1 encrypted:(bool*)arg2;
- (id)rawData;
- (void)setMessage:(id)arg1;
- (id)textHtmlPart;

@end
