/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICLegacyContentUtilities : NSObject

+ (id)contentStringFromWebArchive:(id)arg1;
+ (id)createAttachmentFromWebResource:(id)arg1 inContext:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg2;
+ (id)createAttachmentWithContentID:(id)arg1 mimeType:(id)arg2 data:(id)arg3 filename:(id)arg4 inContext:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg5;
+ (id)generateContentID;
+ (id)newNoteBasedOnModernNote:(id)arg1 inFolder:(id)arg2 context:(/* Warning: unhandled struct encoding: '{NoteContext=#@@@@@@@@QBBBB@}' */ struct NoteContext { Class x1; id x2; id x3; id x4; id x5; unsigned long long x6; bool x7; bool x8; bool x9; bool x10; id x11; }*)arg3;
+ (id)suggestedFilenameForURL:(id)arg1 mimeType:(id)arg2;

@end
