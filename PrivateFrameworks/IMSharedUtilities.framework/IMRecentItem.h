/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMRecentItem : NSObject {
    NSString * _GUID;
    NSString * _accessibilityString;
    NSURL * _fileURL;
    NSDictionary * _messageItemInfo;
    NSData * _payloadData;
    NSNumber * _timestamp;
}

@property (nonatomic, copy) NSString *GUID;
@property (nonatomic, retain) NSString *accessibilityString;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, retain) NSDictionary *messageItemInfo;
@property (nonatomic, retain) NSData *payloadData;
@property (nonatomic, retain) NSNumber *timestamp;

- (id)GUID;
- (id)accessibilityString;
- (id)asJSONObject;
- (void)dealloc;
- (id)fileURL;
- (unsigned long long)hash;
- (id)initWithGUID:(id)arg1 data:(id)arg2 messageItemInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)messageItemInfo;
- (id)payloadData;
- (void)setAccessibilityString:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setMessageItemInfo:(id)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
