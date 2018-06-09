/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKDrawingVersionedDocument : PKVersionedDocument {
    PKDrawing * _drawing;
}

@property (nonatomic, retain) PKDrawing *drawing;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)drawing;
- (id)initWithDrawing:(id)arg1;
- (void)loadUnzippedData:(id)arg1;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int*)arg1;
- (void)setDrawing:(id)arg1;

@end
