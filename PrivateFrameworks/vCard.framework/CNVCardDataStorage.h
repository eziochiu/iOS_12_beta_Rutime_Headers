/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage> {
    NSMutableData * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)storageWithData:(id)arg1;

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (void)appendFormat:(id)arg1;
- (void)appendString:(id)arg1;
- (void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;
- (unsigned long long)currentLength;
- (unsigned long long)estimatedDataLength;
- (id)initWithData:(id)arg1;
- (void)insertString:(id)arg1 atMarker:(id)arg2;
- (id)insertionMarker;

@end
