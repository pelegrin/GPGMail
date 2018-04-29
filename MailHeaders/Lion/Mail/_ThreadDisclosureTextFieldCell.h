/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@interface _ThreadDisclosureTextFieldCell : NSTextFieldCell
{
    BOOL _threadIsOpen;
    BOOL _notReallyThread;
}

+ (void)initialize;
+ (void)recacheStaticArrowImages;
- (id)darkBorderColor;
- (id)lightBorderColor;
- (id)selectionColor;
- (void)setThreadIsOpen:(BOOL)arg1;
- (void)setNotReallyThread:(BOOL)arg1;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
- (void)drawThreadControlWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setBackgroundStyle:(long long)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;

@end
