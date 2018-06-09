/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimePart : NSObject {
    MFWeakReferenceHolder * _body;
    NSMutableDictionary * _bodyParameters;
    NSString * _contentTransferEncoding;
    MFWeakReferenceHolder * _decodedData;
    NSData * _fullData;
    MFMimePart * _nextPart;
    NSMutableDictionary * _otherIvars;
    MFWeakReferenceHolder * _parent;
    NSURL * _parentPartURL;
    NSURL * _partURL;
    MFPartialNetworkDataConsumer * _partialDataConsumer;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _subtype;
    NSString * _type;
}

@property (nonatomic, readonly) MFError *SMIMEError;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (Class)attachmentClass;
+ (void)initialize;
+ (bool)isRecognizedClassForContent:(id)arg1;
+ (bool)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3;
+ (bool)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4;

- (void)_contents:(id*)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long*)arg3 downloadIfNecessary:(bool)arg4 asHTML:(bool)arg5 isComplete:(bool*)arg6;
- (void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 isComplete:(bool*)arg4 decoded:(id*)arg5;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (bool)_hasCompleteBodyDataToOffset:(unsigned long long)arg1;
- (id)_partThatIsAttachment;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(bool)arg2 isSigned:(bool)arg3;
- (void)_setRFC822DecodedMessageBody:(id)arg1;
- (bool)_shouldContinueDecodingProcess;
- (void)addSubpart:(id)arg1;
- (id)alternativeAtIndex:(long long)arg1;
- (unsigned int)approximateRawSize;
- (id)attachmentFilename;
- (id)attachmentURLs;
- (id)attachments;
- (id)bodyData;
- (id)bodyDataForcingDownload:(bool)arg1;
- (id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2;
- (id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3;
- (id)bodyParameterForKey:(id)arg1;
- (id)bodyParameterKeys;
- (id)chosenAlternativePart;
- (void)clearCachedDescryptedMessageBody;
- (void)configureFileWrapper:(id)arg1;
- (id)contentDescription;
- (id)contentID;
- (id)contentLocation;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(bool)arg3;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4 isComplete:(bool*)arg5;
- (id)contentTransferEncoding;
- (id)contentsForTextSystem;
- (id)contentsForTextSystemForcingDownload:(bool)arg1;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4 isComplete:(bool*)arg5;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 isComplete:(bool*)arg4;
- (void)dealloc;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (void)decodeIfNecessary;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartRelated;
- (id)decodeText;
- (id)decodedDataForData:(id)arg1;
- (id)decryptedMessageBodyIsEncrypted:(bool*)arg1 isSigned:(bool*)arg2;
- (id)description;
- (id)disposition;
- (id)dispositionParameterForKey:(id)arg1;
- (id)dispositionParameterKeys;
- (void)download;
- (id)fileWrapper;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (id)fileWrapperForcingDownload:(bool)arg1;
- (id)firstChildPart;
- (void)getNumberOfAttachments:(unsigned int*)arg1 isSigned:(bool*)arg2 isEncrypted:(bool*)arg3;
- (bool)hasContentType:(id)arg1 subtype:(id)arg2;
- (bool)hasContents;
- (bool)hasValidMultipartSignedContentType;
- (id)init;
- (bool)isAttachment;
- (bool)isGenerated;
- (bool)isHTML;
- (bool)isReadableText;
- (bool)isRich;
- (id)languages;
- (id)mimeBody;
- (id)nextSiblingPart;
- (long long)numberOfAlternatives;
- (unsigned int)numberOfAttachments;
- (id)parentPart;
- (bool)parseIMAPPropertyList:(id)arg1;
- (bool)parseMimeBody;
- (bool)parseMimeBodyDownloadIfNecessary:(bool)arg1;
- (id)partNumber;
- (id)partURL;
- (id)preservedHeaderValueForKey:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)rfc822DecodedMessageBody;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (void)setContentDescription:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContentLocation:(id)arg1;
- (void)setContentTransferEncoding:(id)arg1;
- (void)setDisposition:(id)arg1;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (void)setIsGenerated:(bool)arg1;
- (void)setLanguages:(id)arg1;
- (void)setMimeBody:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSubparts:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setType:(id)arg1;
- (bool)shouldConsiderInlineOverridingExchangeServer;
- (id)signedData;
- (id)startPart;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(bool)arg3;
- (id)subpartAtIndex:(long long)arg1;
- (id)subparts;
- (id)subtype;
- (unsigned int)textEncoding;
- (id)textHtmlPart;
- (unsigned long long)totalTextSize;
- (id)type;
- (bool)usesKnownSignatureProtocol;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)SMIMEError;
- (bool)_needsSignatureVerification:(id*)arg1;
- (void)_setSMIMEError:(id)arg1;
- (void)_setSigners:(id)arg1;
- (id)copySigners;
- (id)decodeApplicationPkcs7_mime;
- (id)decodeMultipartSigned;
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3;
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4;

@end
