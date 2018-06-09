/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {
    TSPData * _tspData;
    bool  isAudioOnly;
}

@property (nonatomic, retain) TSPData *tspData;

- (void)dealloc;
- (bool)isAudioOnly;
- (void)setIsAudioOnly:(bool)arg1;
- (void)setTspData:(id)arg1;
- (id)tspData;

@end
