/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMFReader : NSObject <MFReader> {
    EMFPlayer * m_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithEMFPlayer:(id)arg1;
- (int)play:(id)arg1;
- (oneway void)release;

@end
