/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTSPMipmapData : NSObject <TSCHUnretainedParent> {
    TSPData * mData;
    TSCH3DTSPImageDataTexture * mParent;
}

@property (nonatomic, readonly) TSPData *data;

+ (id)dataWithTSPData:(id)arg1;

- (void)clearParent;
- (id)data;
- (id)databuffer;
- (void)dealloc;
- (id)initWithTSPData:(id)arg1;
- (void)setParent:(id)arg1;

@end
