/* This file is part of Clementine.
   Copyright 2012, David Sansome <me@davidsansome.com>
   
   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef ADDPODCASTDIALOG_H
#define ADDPODCASTDIALOG_H

#include <QDialog>

class AddPodcastPage;
class Application;
class Ui_AddPodcastDialog;

class QModelIndex;

class AddPodcastDialog : public QDialog {
  Q_OBJECT
  
public:
  AddPodcastDialog(Application* app, QWidget* parent = 0);
  ~AddPodcastDialog();

private slots:
  void AddPodcast();
  void ChangePage(int index);
  void ChangePodcast(const QModelIndex& current);

  void PageBusyChanged(bool busy);

private:
  void AddPage(AddPodcastPage* page);
  
private:
  Ui_AddPodcastDialog* ui_;
  QPushButton* add_button_;

  QList<AddPodcastPage*> pages_;
  QList<bool> page_is_busy_;
};

#endif // ADDPODCASTDIALOG_H
