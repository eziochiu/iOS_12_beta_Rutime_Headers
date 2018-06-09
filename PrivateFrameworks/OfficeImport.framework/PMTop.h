/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTop : CMTop <OIProgressiveReaderDelegate> {
    CMArchiveManager * _archiver;
    PMPresentationMapper * _mapper;
    PMState * _state;
    bool  _xml;
}

+ (void)fillHTMLArchiveForPowerPointData:(id)arg1 fileName:(id)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
+ (void)fillHTMLArchiveForPowerPointFile:(id)arg1 xmlFlag:(bool)arg2 archiver:(id)arg3;
+ (void)fillHTMLArchiveForPowerPointFrom:(id)arg1 inMemory:(bool)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;

- (void).cxx_destruct;
- (bool)isCancelled;
- (void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
- (void)readFile:(id)arg1 xmlFlag:(bool)arg2 archiver:(id)arg3;
- (void)readFrom:(id)arg1 inMemory:(bool)arg2 xmlFlag:(bool)arg3 archiver:(id)arg4;
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;

@end
