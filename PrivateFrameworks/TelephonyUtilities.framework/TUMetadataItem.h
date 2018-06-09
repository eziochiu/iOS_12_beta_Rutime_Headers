/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMetadataItem : NSObject {
    NSMutableDictionary * _callMetadata;
}

@property (nonatomic, readonly) NSMutableDictionary *callMetadata;
@property (getter=isEmpty, nonatomic, readonly) bool empty;

- (void).cxx_destruct;
- (id)callMetadata;
- (id)description;
- (id)init;
- (bool)isEmpty;
- (id)metadataForProvider:(Class)arg1;
- (void)setMetadata:(id)arg1 forProvider:(Class)arg2;

@end
