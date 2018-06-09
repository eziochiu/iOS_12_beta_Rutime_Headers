/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCameraReaderOutput : NSObject {
    CRCameraReaderOutputInternal * _objectInternal;
}

@property (readonly) NSString *formattedStringValue;
@property (retain) CRCameraReaderOutputInternal *objectInternal;
@property (readonly) NSString *stringValue;
@property (readonly) NSString *type;

- (void).cxx_destruct;
- (void)dealloc;
- (id)formattedStringValue;
- (id)init;
- (id)objectInternal;
- (void)setObjectInternal:(id)arg1;
- (id)stringValue;
- (id)type;

@end
