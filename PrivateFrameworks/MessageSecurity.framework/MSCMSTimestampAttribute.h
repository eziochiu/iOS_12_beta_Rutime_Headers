/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
 */

@interface MSCMSTimestampAttribute : NSObject <MSCMSAttributeCoder> {
    bool  _certChainRequested;
    NSArray * _certificates;
    MSOID * _digestAlgorithm;
    NSURL * _serverURL;
    MSCMSSignerInfo * _singerInfo;
    NSDate * _timestampTime;
}

@property bool certChainRequested;
@property (readonly) NSArray *certificates;
@property (readonly) MSOID *digestAlgorithm;
@property (retain) NSURL *serverURL;
@property (readonly) MSCMSSignerInfo *singerInfo;
@property (readonly) NSDate *timestampTime;

- (void).cxx_destruct;
- (bool)certChainRequested;
- (id)certificates;
- (id)digestAlgorithm;
- (id)encodeAttributeWithError:(id*)arg1;
- (id)initWithAttribute:(id)arg1 error:(id*)arg2;
- (id)initWithServerURL:(id)arg1;
- (id)initWithServerURL:(id)arg1 chainRequested:(bool)arg2;
- (id)initWithTimestampToken:(id)arg1;
- (id)serverURL;
- (void)setCertChainRequested:(bool)arg1;
- (void)setServerURL:(id)arg1;
- (id)singerInfo;
- (id)timestampTime;
- (bool)verifyTimestamps:(id*)arg1;

@end
