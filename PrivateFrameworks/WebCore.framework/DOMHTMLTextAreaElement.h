/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement  {
}

@property BOOL autofocus;
@property int cols;
@property BOOL disabled;
@property(readonly) DOMHTMLFormElement * form;
@property(copy) NSString * name;
@property BOOL readOnly;
@property int rows;
@property(readonly) NSString * type;
@property(copy) NSString * defaultValue;
@property(copy) NSString * value;
@property(readonly) BOOL willValidate;
@property int selectionStart;
@property int selectionEnd;
@property(copy) NSString * accessKey;


- (void)setReadOnly:(BOOL)arg1;
- (void)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (void)setMaxLength:(int)arg1;
- (int)maxLength;
- (unsigned int)textLength;
- (void)setWrap:(id)arg1;
- (id)wrap;
- (void)setSelectionRange:(int)arg1 end:(int)arg2;
- (void)setRangeText:(id)arg1 start:(unsigned int)arg2 end:(unsigned int)arg3 selectionMode:(id)arg4;
- (void)setRangeText:(id)arg1;
- (void)select;
- (void)setSelectionDirection:(id)arg1;
- (id)selectionDirection;
- (void)setSelectionEnd:(int)arg1;
- (int)selectionEnd;
- (void)setSelectionStart:(int)arg1;
- (int)selectionStart;
- (void)setRequired:(BOOL)arg1;
- (BOOL)required;
- (void)setDirName:(id)arg1;
- (id)dirName;
- (void)setCols:(int)arg1;
- (int)cols;
- (void)setAutocapitalize:(id)arg1;
- (id)autocapitalize;
- (void)setAutocorrect:(BOOL)arg1;
- (void)setCustomValidity:(id)arg1;
- (BOOL)checkValidity;
- (id)labels;
- (id)validationMessage;
- (id)validity;
- (BOOL)willValidate;
- (void)setAutofocus:(BOOL)arg1;
- (BOOL)autofocus;
- (void)setAccessKey:(id)arg1;
- (id)accessKey;
- (void)setDisabled:(BOOL)arg1;
- (id)name;
- (int)structuralComplexityContribution;
- (BOOL)_isEdited;
- (BOOL)readOnly;
- (int)rows;
- (id)placeholder;
- (BOOL)autocorrect;
- (int)_autocapitalizeType;
- (id)form;
- (BOOL)disabled;
- (void)setPlaceholder:(id)arg1;
- (void)setRows:(int)arg1;
- (id)type;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setName:(id)arg1;
- (id)endPosition;
- (id)startPosition;
- (BOOL)isEditing;
- (BOOL)isTextControl;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInputTraits;
- (BOOL)nodeCanBecomeFirstResponder;
- (id)_textFormElement;
- (BOOL)_supportsAutoFill;
- (BOOL)_requiresInputView;
- (BOOL)_requiresAccessoryView;
- (void)_stopAssistingDocumentView:(id)arg1;
- (void)_startAssistingDocumentView:(id)arg1;

@end