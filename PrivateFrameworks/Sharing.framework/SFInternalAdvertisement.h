/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFInternalAdvertisement : NSObject {
    NSData * _advertisementPayload;
    NSDictionary * _options;
}

@property (copy) NSData *advertisementPayload;
@property (copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)advertisementPayload;
- (id)description;
- (id)initWithAdvertisementPayload:(id)arg1 options:(id)arg2;
- (id)options;
- (void)setAdvertisementPayload:(id)arg1;
- (void)setOptions:(id)arg1;

@end
