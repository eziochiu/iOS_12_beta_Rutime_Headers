/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVContentKeyRequestInternal : NSObject {
    unsigned long long  cryptorKeyRequestID;
    NSString * cryptorUUID;
    struct OpaqueFigCustomURLHandler { } * customURLHandler;
    id  customURLProviderContext;
    unsigned long long  customURLRequestID;
    NSError * error;
    struct OpaqueFigCPECryptor { } * figCryptor;
    id  identifier;
    NSData * initializationData;
    NSDictionary * preloadingRequestOptions;
    bool  providesPersistableKey;
    struct __CFDictionary { } * requestInfo;
    int  responseInfoSent;
    AVContentKeySession * session;
    NSData * sinfDefaultKeyIdentifier;
    long long  status;
}

@end
