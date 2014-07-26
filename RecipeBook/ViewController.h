//
//  ViewController.h
//  RecipeBook
//
//  Created by Shrinivas Deshpande on 7/21/14.
//  Copyright (c) 2014 GS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) IBOutlet UITableView *tableView;

@end
